#include "Dinheiro.h"
#include <cctype>
#include <sstream>
#include <iomanip>

/**
 * @brief Valida o valor informado e o converte para centavos.
 * @param dinheiro_string String contendo o valor digitado.
 * @return Valor inteiro em centavos.
 * @throw invalid_argument Se o formato ou valor forem invalidos.
 */
long long Dinheiro::validarDinheiro(const string &dinheiro_string) {
    if (dinheiro_string.empty()) {
        throw invalid_argument("Dinheiro invalido: campo vazio.");
    }

    string numeros;
    bool encontrouSeparador = false;

    for (char c : dinheiro_string) {
        if (isdigit(static_cast<unsigned char>(c))) {
            numeros += c;
        } else if (c == ',' || c == '.') {
            if (encontrouSeparador) {
                throw invalid_argument("Dinheiro invalido: mais de um separador decimal.");
            }
            numeros += '.';
            encontrouSeparador = true;
        } else {
            throw invalid_argument("Dinheiro invalido: apenas digitos, ponto ou virgula sao permitidos.");
        }
    }

    double valorDouble;
    try {
        valorDouble = stod(numeros);
    } catch (...) {
        throw invalid_argument("Dinheiro invalido: formato incorreto.");
    }

    if (valorDouble < 0.01 || valorDouble > 1000000.00) {
        throw invalid_argument("Dinheiro invalido: deve estar entre 0,01 e 1.000.000,00.");
    }

    long long centavos = static_cast<long long>(valorDouble * 100 + 0.5);

    return centavos;
}

/**
 * @brief Define o valor apos validacao.
 * @param dinheiro_string String com o valor informado.
 * @throw invalid_argument Se o valor for invalido.
 */
void Dinheiro::setValor(const string &dinheiro_string) {
    valor = validarDinheiro(dinheiro_string);
}

/**
 * @brief Retorna o valor em centavos.
 * @return Valor inteiro em centavos.
 */
long long Dinheiro::getValor() const {
    return valor;
}

/**
 * @brief Retorna o valor formatado como R$X,XX.
 * @return String com o valor em reais.
 */
string Dinheiro::getValorFormatado() const {
    ostringstream oss;
    oss << "R$" << fixed << setprecision(2) << (valor / 100.0);
    string resultado = oss.str();

    for (char &c : resultado) {
        if (c == '.') c = ',';
    }

    return resultado;
}

