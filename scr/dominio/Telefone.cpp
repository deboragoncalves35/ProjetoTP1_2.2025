#include "Telefone.h"
#include <cctype>

/**
 * @brief Valida o formato do telefone conforme as regras do dominio.
 * @param telefone_string String contendo o numero informado.
 * @throw invalid_argument Se o formato for invalido.
 */
void Telefone::validarTelefone(const string &telefone_string) {
    if (telefone_string.size() != 14) {
        throw invalid_argument("Telefone invalido: deve conter exatamente 14 caracteres (+ e 13 digitos).");
    }

    if (telefone_string[0] != '+') {
        throw invalid_argument("Telefone invalido: deve comecar com '+'.");
    }

    for (size_t i = 1; i < telefone_string.size(); ++i) {
        char c = telefone_string[i];
        if (!isdigit(static_cast<unsigned char>(c))) {
            throw invalid_argument("Telefone invalido: apenas digitos apos '+' sao permitidos.");
        }
    }
}

/**
 * @brief Define o valor apos validacao.
 * @param telefone_string String contendo o numero informado.
 */
void Telefone::setValor(const string &telefone_string) {
    validarTelefone(telefone_string);
    valor = telefone_string;
}

/**
 * @brief Retorna o valor armazenado.
 * @return String com o numero validado.
 */
string Telefone::getValor() const {
    return valor;
}
