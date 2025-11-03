#ifndef NUMERO_H_INCLUDED
#define NUMERO_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Numero
 * @brief Representa um numero inteiro valido entre 1 e 999.
 *
 * O numero deve conter apenas digitos (0-9), sem zeros a esquerda.
 * O valor deve estar entre 1 e 999.
 */
class Numero {
private:
    int valor; ///< Armazena o numero validado.

    /**
     * @brief Verifica se o valor informado e valido.
     * @param numero_string String contendo o valor informado.
     * @return Valor inteiro validado.
     * @throw invalid_argument Se o formato ou o valor forem invalidos.
     */
    int validarNumero(const string &numero_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param numero_string String contendo o valor informado.
     * @throw invalid_argument Se o valor for invalido.
     */
    void setValor(const string &numero_string);

    /**
     * @brief Retorna o valor armazenado.
     * @return Valor inteiro do numero.
     */
    int getValor() const;
};

#endif // NUMERO_H_INCLUDED
