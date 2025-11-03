#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Email
 * @brief Representa um endereco de email valido.
 *
 * O formato deve seguir o padrao parte-local@dominio.
 * Parte local pode conter letras, digitos, pontos e hifens,
 * com comprimento maximo de 64 caracteres.
 * Dominio pode conter letras, digitos e hifens, com partes separadas por pontos,
 * com comprimento maximo de 255 caracteres.
 */
class Email {
private:
    string valor; ///< Armazena o email validado.

    /**
     * @brief Verifica se o email informado e valido.
     * @param email_string String com o email a ser validado.
     * @throw invalid_argument Se o formato for invalido.
     */
    void validarEmail(const string &email_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param email_string String com o email informado.
     * @throw invalid_argument Se o formato for invalido.
     */
    void setValor(const string &email_string);

    /**
     * @brief Retorna o email armazenado.
     * @return String com o email validado.
     */
    string getValor() const;
};

#endif // EMAIL_H_INCLUDED
