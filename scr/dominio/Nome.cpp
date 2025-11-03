#include "Nome.h"
#include <cctype>

/**
 * @brief Valida o formato do nome conforme as regras do dominio.
 * @param nome_string String com o nome a ser validado.
 * @throw invalid_argument Se o formato for invalido.
 */
void Nome::validarNome(const string &nome_string) {
    if (nome_string.size() < 5 || nome_string.size() > 20) {
        throw invalid_argument("Nome invalido: deve ter entre 5 e 20 caracteres.");
    }

    if (isspace(static_cast<unsigned char>(nome_string.front())) ||
        isspace(static_cast<unsigned char>(nome_string.back()))) {
        throw invalid_argument("Nome invalido: nao pode comecar nem terminar com espaco.");
    }

    bool encontrouEspaco = false;
    bool temEspacoDuplicado = false;
    bool primeiraLetraPalavra = true;
    bool temEspaco = false;

    for (size_t i = 0; i < nome_string.size(); ++i) {
        char c = nome_string[i];

        if (!(isalpha(static_cast<unsigned char>(c)) || c == ' ')) {
            throw invalid_argument("Nome invalido: apenas letras e espacos sao permitidos.");
        }

        if (c == ' ') {
            if (encontrouEspaco) {
                temEspacoDuplicado = true;
                break;
            }
            encontrouEspaco = true;
            temEspaco = true;
            primeiraLetraPalavra = true;
            continue;
        } else {
            encontrouEspaco = false;
        }

        if (primeiraLetraPalavra) {
            if (!isupper(static_cast<unsigned char>(c))) {
                throw invalid_argument("Nome invalido: cada palavra deve comecar com letra maiuscula.");
            }
            primeiraLetraPalavra = false;
        } else {
            if (!islower(static_cast<unsigned char>(c))) {
                throw invalid_argument("Nome invalido: apenas a primeira letra de cada palavra deve ser maiuscula.");
            }
        }
    }

    if (temEspacoDuplicado) {
        throw invalid_argument("Nome invalido: nao pode conter dois espacos consecutivos.");
    }

    if (!temEspaco) {
        throw invalid_argument("Nome invalido: deve conter pelo menos um espaco (nome e sobrenome).");
    }
}

/**
 * @brief Define o valor apos validacao.
 * @param nome_string String com o nome informado.
 */
void Nome::setValor(const string &nome_string) {
    validarNome(nome_string);
    valor = nome_string;
}

/**
 * @brief Retorna o nome armazenado.
 * @return String com o nome validado.
 */
string Nome::getValor() const {
    return valor;
}
