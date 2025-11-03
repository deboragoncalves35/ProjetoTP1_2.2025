#include "Email.h"
#include <cctype>
#include <sstream>

/**
 * @brief Valida o formato do endereco de email.
 * @param email_string String com o email a ser validado.
 * @throw invalid_argument Se o formato ou regras forem violadas.
 */
void Email::validarEmail(const string &email_string) {
    if (email_string.empty()) {
        throw invalid_argument("Email invalido: campo vazio.");
    }

    size_t posArroba = email_string.find('@');
    if (posArroba == string::npos || email_string.find('@', posArroba + 1) != string::npos) {
        throw invalid_argument("Email invalido: deve conter exatamente um '@'.");
    }

    string parteLocal = email_string.substr(0, posArroba);
    string dominio = email_string.substr(posArroba + 1);

    if (parteLocal.empty() || dominio.empty()) {
        throw invalid_argument("Email invalido: parte local e dominio nao podem ser vazios.");
    }

    if (parteLocal.size() > 64) {
        throw invalid_argument("Email invalido: parte local excede 64 caracteres.");
    }

    if (dominio.size() > 255) {
        throw invalid_argument("Email invalido: dominio excede 255 caracteres.");
    }

    if (parteLocal.front() == '.' || parteLocal.front() == '-' ||
        parteLocal.back() == '.' || parteLocal.back() == '-') {
        throw invalid_argument("Email invalido: parte local nao pode comecar nem terminar com '.' ou '-'.");
    }

    for (size_t i = 0; i < parteLocal.size(); ++i) {
        char c = parteLocal[i];
        if (!(isalnum(static_cast<unsigned char>(c)) || c == '.' || c == '-')) {
            throw invalid_argument("Email invalido: parte local contem caractere invalido.");
        }

        if ((c == '.' || c == '-') && i + 1 < parteLocal.size()) {
            char prox = parteLocal[i + 1];
            if (!(isalnum(static_cast<unsigned char>(prox)))) {
                throw invalid_argument("Email invalido: '.' ou '-' deve ser seguido por letra ou digito.");
            }
        }
    }

    string parte;
    stringstream ss(dominio);
    while (getline(ss, parte, '.')) {
        if (parte.empty()) {
            throw invalid_argument("Email invalido: partes do dominio nao podem ser vazias.");
        }

        if (parte.front() == '-' || parte.back() == '-') {
            throw invalid_argument("Email invalido: parte do dominio nao pode comecar ou terminar com '-'.");
        }

        for (char c : parte) {
            if (!(isalnum(static_cast<unsigned char>(c)) || c == '-')) {
                throw invalid_argument("Email invalido: dominio contem caractere invalido.");
            }
        }
    }
}

/**
 * @brief Define o valor apos validacao.
 * @param email_string String com o email informado.
 */
void Email::setValor(const string &email_string) {
    validarEmail(email_string);
    valor = email_string;
}

/**
 * @brief Retorna o valor armazenado.
 * @return String com o email validado.
 */
string Email::getValor() const {
    return valor;
}
