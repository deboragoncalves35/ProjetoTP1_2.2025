#ifndef TELEFONE_H_INCLUDED
#define TELEFONE_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Telefone
 * @brief Representa um numero de telefone internacional valido.
 *
 * O formato valido e +DDDDDDDDDDDDDD, contendo exatamente 14 caracteres:
 * o sinal '+' seguido de 13 digitos (0-9).
 */
class Telefone {
private:
    string valor; ///< Armazena o telefone validado.

    /**
     * @brief Verifica se o numero de telefone e valido.
     * @param telefone_string String contendo o numero informado.
     * @throw invalid_argument Se o formato for invalido.
     */
    void validarTelefone(const string &telefone_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param telefone_string String contendo o telefone informado.
     * @throw invalid_argument Se o formato for invalido.
     */
    void setValor(const string &telefone_string);

    /**
     * @brief Retorna o valor armazenado.
     * @return String com o numero de telefone validado.
     */
    string getValor() const;
};

#endif // TELEFONE_H_INCLUDED

