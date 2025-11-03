#include "Endereco.h"
#include <cctype>

/**
 * @brief Valida o formato do endereco.
 * @param endereco_string String com o endereco a ser validado.
 * @throw invalid_argument Se o formato for invalido.
 */
void Endereco::validarEndereco(const string &endereco_string) {
    if (endereco_string.size() < 5 || endereco_string.size() > 30) {
        throw invalid_argument("Endereco invalido: deve ter entre 5 e 30 caracteres.");
    }

    char primeiro = endereco_string.front();
    char ultimo = endereco_string.back();

    if (isspace(static_cast<unsigned char>(primeiro)) ||
        primeiro == ',' || primeiro == '.' ||
        isspace(static_cast<unsigned char>(ultimo)) ||
        ultimo == ',' || ultimo == '.') {
        throw invalid_argument("Endereco invalido: nao pode comecar nem terminar com espaco, virgula ou ponto.");
    }

    bool temLetra = false;

    for (size_t i = 0; i < endereco_string.size(); ++i) {
        char c = endereco_string[i];

        if (!(isalpha(static_cast<unsigned char>(c)) ||
              isdigit(static_cast<unsigned char>(c)) ||
              c == ' ' || c == ',' || c == '.' || c == '-')) {
            throw invalid_argument("Endereco invalido: contem caractere nao permitido.");
        }

        if (isalpha(static_cast<unsigned char>(c))) {
            temLetra = true;
        }

        if (c == ' ' && i + 1 < endereco_string.size() && endereco_string[i + 1] == ' ') {
            throw invalid_argument("Endereco invalido: nao pode conter dois espacos seguidos.");
        }

        if (c == ' ' && i + 1 < endereco_string.size()) {
            char prox = endereco_string[i + 1];
            if (!(isalpha(static_cast<unsigned char>(prox)) || isdigit(static_cast<unsigned char>(prox)))) {
                throw invalid_argument("Endereco invalido: espaco deve ser seguido por letra ou digito.");
            }
        }

        if ((c == ',' || c == '.') && i + 1 < endereco_string.size()) {
            char prox = endereco_string[i + 1];
            if (prox == ',' || prox == '.') {
                throw invalid_argument("Endereco invalido: virgula ou ponto nao podem ser seguidos por outro delimitador.");
            }
        }
    }

    if (!temLetra) {
        throw invalid_argument("Endereco invalido: deve conter pelo menos uma letra.");
    }
}

/**
 * @brief Define o valor apos validacao.
 * @param endereco_string String contendo o endereco informado.
 */
void Endereco::setValor(const string &endereco_string) {
    validarEndereco(endereco_string);
    valor = endereco_string;
}

/**
 * @brief Retorna o endereco armazenado.
 * @return String com o endereco.
 */
string Endereco::getValor() const {
    return valor;
}

