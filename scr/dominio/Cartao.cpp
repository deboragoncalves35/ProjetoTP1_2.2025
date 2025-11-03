#include "Cartao.h"
#include <cctype>

/**
 * @brief Valida o cartao conforme o algoritmo de Luhn.
 * @param numero String contendo os digitos do cartao.
 * @return true se o numero for valido, false caso contrario.
 */
bool Cartao::validarLuhn(const string &numero) const {
    int soma = 0;
    bool dobra = false;

    for (int i = numero.size() - 1; i >= 0; --i) {
        int digito = numero[i] - '0';
        if (dobra) {
            digito *= 2;
            if (digito > 9)
                digito -= 9;
        }
        soma += digito;
        dobra = !dobra;
    }

    return (soma % 10 == 0);
}

/**
 * @brief Verifica se o cartao atende ao formato e e valido pelo Luhn.
 * @param cartao_string Numero informado.
 * @throw invalid_argument Se o formato ou numero forem invalidos.
 */
void Cartao::validarCartao(const string &cartao_string) {
    if (cartao_string.size() != 16) {
        throw invalid_argument("Cartao invalido: deve conter exatamente 16 digitos.");
    }

    for (char c : cartao_string) {
        if (!isdigit(static_cast<unsigned char>(c))) {
            throw invalid_argument("Cartao invalido: apenas digitos sao permitidos.");
        }
    }

    if (!validarLuhn(cartao_string)) {
        throw invalid_argument("Cartao invalido: digito verificador incorreto (falha no algoritmo de Luhn).");
    }
}

/**
 * @brief Define o valor apos validacao.
 * @param cartao_string Numero informado.
 */
void Cartao::setValor(const string &cartao_string) {
    validarCartao(cartao_string);
    valor = cartao_string;
}

/**
 * @brief Retorna o numero do cartao armazenado.
 * @return String com o numero do cartao.
 */
string Cartao::getValor() const {
    return valor;
}
