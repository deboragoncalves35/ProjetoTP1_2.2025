#ifndef CARTAO_H_INCLUDED
#define CARTAO_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Cartao
 * @brief Representa um número de cartão de crédito ou débito.
 *
 * O número do cartão deve conter exatamente 16 dígitos numéricos e
 * passar na validação do algoritmo de Luhn. Caso contrário,
 * uma exceção é lançada.
 */
class Cartao {
private:
    string valor; ///< Número do cartão (16 dígitos).

    /**
     * @brief Verifica se o valor informado é válido segundo o algoritmo de Luhn.
     * @param numero Número do cartão a ser validado.
     * @throw invalid_argument Se o formato ou o dígito verificador for inválido.
     */
    void validar(const string &numero);

    /**
     * @brief Aplica o algoritmo de Luhn para verificar a validade do número.
     * @param numero Número de cartão com 16 dígitos.
     * @return true se o número for válido, false caso contrário.
     */
    bool luhnValido(const string &numero) const;

public:
    /**
     * @brief Define o número do cartão após validação.
     * @param numero Número de 16 dígitos numéricos.
     * @throw invalid_argument Se o número for inválido.
     */
    void setValor(const string &numero);

    /**
     * @brief Retorna o número de cartão armazenado.
     * @return String contendo o número do cartão.
     */
    string getValor() const;
};

#endif // CARTAO_H_INCLUDED
