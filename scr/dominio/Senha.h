#ifndef SENHA_H_INCLUDED
#define SENHA_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Senha
 * @brief Representa uma senha valida conforme regras de formato e combinacao de caracteres.
 *
 * A senha deve ter entre 5 e 10 caracteres.
 * Pode conter letras (a-z, A-Z), digitos (0-9) e caracteres especiais (! " # $ % & ?).
 * Deve haver pelo menos uma letra maiuscula, uma letra minuscula, um digito e um caractere especial.
 * Letra nao pode ser seguida por letra; digito nao pode ser seguido por digito.
 */
class Senha {
private:
    string valor; ///< Armazena a senha validada.

    /**
     * @brief Verifica se a senha informada e valida.
     * @param senha_string String contendo a senha.
     * @throw invalid_argument Se o formato ou combinacao forem invalidos.
     */
    void validarSenha(const string &senha_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param senha_string String contendo a senha informada.
     * @throw invalid_argument Se o valor for invalido.
     */
    void setValor(const string &senha_string);

    /**
     * @brief Retorna o valor armazenado.
     * @return String com a senha validada.
     */
    string getValor() const;
};

#endif // SENHA_H_INCLUDED

