#ifndef ENDERECO_H_INCLUDED
#define ENDERECO_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Endereco
 * @brief Representa um endereco valido.
 *
 * O endereco deve ter entre 5 e 30 caracteres, podendo conter letras,
 * digitos, espacos, virgulas, pontos e hifens.
 * Nao pode comecar ou terminar com espaco, virgula ou ponto,
 * e nao pode conter dois espacos consecutivos.
 */
class Endereco {
private:
    string valor; ///< Armazena o endereco validado.

    /**
     * @brief Verifica se o endereco informado e valido.
     * @param endereco_string String contendo o endereco informado.
     * @throw invalid_argument Se o formato for invalido.
     */
    void validarEndereco(const string &endereco_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param endereco_string String contendo o endereco informado.
     * @throw invalid_argument Se o valor for invalido.
     */
    void setValor(const string &endereco_string);

    /**
     * @brief Retorna o endereco armazenado.
     * @return String com o endereco.
     */
    string getValor() const;
};

#endif // ENDERECO_H_INCLUDED

