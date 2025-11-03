#ifndef CARTAO_H_INCLUDED
#define CARTAO_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Cartao
 * @brief Representa um numero de cartao de credito valido.
 *
 * O cartao deve conter 16 digitos numericos e ser valido
 * conforme o algoritmo de Luhn.
 */
class Cartao {
private:
    string valor; ///< Armazena o numero do cartao validado.

    /**
     * @brief Verifica se o numero de cartao e valido pelo algoritmo de Luhn.
     * @param numero String contendo apenas digitos.
     * @return true se o numero for valido, false caso contrario.
     */
    bool validarLuhn(const string &numero) const;

    /**
     * @brief Verifica se o cartao atende ao formato e validade pelo Luhn.
     * @param cartao_string Numero do cartao.
     * @throw invalid_argument Se o formato for invalido.
     */
    void validarCartao(const string &cartao_string);

public:
    /**
     * @brief Define o numero do cartao apos validacao.
     * @param cartao_string Numero informado.
     * @throw invalid_argument Se o numero for invalido.
     */
    void setValor(const string &cartao_string);

    /**
     * @brief Retorna o numero do cartao armazenado.
     * @return String com o numero do cartao.
     */
    string getValor() const;
};

#endif // CARTAO_H_INCLUDED
