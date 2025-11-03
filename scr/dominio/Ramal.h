#ifndef RAMAL_H_INCLUDED
#define RAMAL_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Ramal
 * @brief Representa um ramal telefonico valido entre 00 e 50.
 *
 * O ramal deve conter exatamente dois digitos numericos (0-9).
 * O valor deve estar no intervalo de 00 a 50 (inclusive).
 */
class Ramal {
private:
    int valor; ///< Armazena o ramal validado como inteiro.

    /**
     * @brief Verifica se o valor informado e valido.
     * @param ramal_string String contendo o ramal informado.
     * @return Valor numerico do ramal validado.
     * @throw invalid_argument Se o formato ou o valor forem invalidos.
     */
    int validarRamal(const string &ramal_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param ramal_string String contendo o ramal informado.
     * @throw invalid_argument Se o valor for invalido.
     */
    void setValor(const string &ramal_string);

    /**
     * @brief Retorna o valor armazenado.
     * @return Valor inteiro do ramal.
     */
    int getValor() const;
};

#endif // RAMAL_H_INCLUDED
