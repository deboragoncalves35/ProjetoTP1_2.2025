#include "Codigo.h"
#include <cctype>

/**
 * @brief Verifica se o valor informado segue o formato correto.
 * @param codigo String contendo o codigo a ser verificado.
 * @throw invalid_argument Se o codigo nao tiver 10 caracteres ou
 *        contiver algo diferente de letra ou digito.
 */
void Codigo::validarCodigo(const string &codigo) {
    if (codigo.size() != 10) {
        throw invalid_argument("Codigo invalido: deve ter exatamente 10 caracteres.");
    }

    for (char c : codigo) {
        if (!isalnum(static_cast<unsigned char>(c))) {
            throw invalid_argument("Codigo invalido: apenas letras e digitos sao permitidos.");
        }
    }
}

/**
 * @brief Define o valor apos validacao.
 * @param codigo String contendo o codigo.
 * @throw invalid_argument Se o valor for invalido.
 */
void Codigo::setValor(const string &codigo) {
    validarCodigo(codigo);
    this->valor = codigo;
}

/**
 * @brief Retorna o valor atual armazenado.
 * @return String com o codigo.
 */
string Codigo::getValor() const {
    return valor;
}
