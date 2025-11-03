#include "Senha.h"
#include <cctype>

/**
 * @brief Valida o formato da senha conforme as regras do dominio.
 * @param senha_string String contendo a senha informada.
 * @throw invalid_argument Se o formato ou a combinacao de caracteres forem invalidos.
 */
void Senha::validarSenha(const string &senha_string) {
    if (senha_string.size() < 5 || senha_string.size() > 10) {
        throw invalid_argument("Senha invalida: deve ter entre 5 e 10 caracteres.");
    }

    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temDigito = false;
    bool temEspecial = false;

    string especiais = "!\"#$%&?";

    for (size_t i = 0; i < senha_string.size(); ++i) {
        char c = senha_string[i];

        if (!(isalpha(static_cast<unsigned char>(c)) || isdigit(static_cast<unsigned char>(c)) ||
              especiais.find(c) != string::npos)) {
            throw invalid_argument("Senha invalida: contem caractere nao permitido.");
        }

        if (isupper(static_cast<unsigned char>(c))) temMaiuscula = true;
        if (islower(static_cast<unsigned char>(c))) temMinuscula = true;
        if (isdigit(static_cast<unsigned char>(c))) temDigito = true;
        if (especiais.find(c) != string::npos) temEspecial = true;

        if (i > 0) {
            char anterior = senha_string[i - 1];

            if (isalpha(static_cast<unsigned char>(anterior)) && isalpha(static_cast<unsigned char>(c))) {
                throw invalid_argument("Senha invalida: letra nao pode ser seguida por letra.");
            }

            if (isdigit(static_cast<unsigned char>(anterior)) && isdigit(static_cast<unsigned char>(c))) {
                throw invalid_argument("Senha invalida: digito nao pode ser seguido por digito.");
            }
        }
    }

    if (!temMaiuscula)
        throw invalid_argument("Senha invalida: deve conter pelo menos uma letra maiuscula (A-Z).");

    if (!temMinuscula)
        throw invalid_argument("Senha invalida: deve conter pelo menos uma letra minuscula (a-z).");

    if (!temDigito)
        throw invalid_argument("Senha invalida: deve conter pelo menos um digito (0-9).");

    if (!temEspecial)
        throw invalid_argument("Senha invalida: deve conter pelo menos um caractere especial (! \" # $ % & ?).");
}

/**
 * @brief Define o valor apos validacao.
 * @param senha_string String contendo a senha informada.
 */
void Senha::setValor(const string &senha_string) {
    validarSenha(senha_string);
    valor = senha_string;
}

/**
 * @brief Retorna o valor armazenado.
 * @return String com a senha validada.
 */
string Senha::getValor() const {
    return valor;
}
