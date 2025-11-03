#ifndef DINHEIRO_H_INCLUDED
#define DINHEIRO_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Dinheiro
 * @brief Representa um valor monetario entre 0,01 e 1.000.000,00.
 *
 * O valor e armazenado como inteiro (em centavos) para evitar erro de arredondamento.
 * O valor informado deve conter apenas digitos e, opcionalmente, ponto ou virgula.
 */
class Dinheiro {
private:
    long long valor; ///< Valor armazenado em centavos.

    /**
     * @brief Verifica se o valor informado e valido.
     * @param dinheiro_string String contendo o valor digitado.
     * @return Valor inteiro em centavos.
     * @throw invalid_argument Se o formato ou valor forem invalidos.
     */
    long long validarDinheiro(const string &dinheiro_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param dinheiro_string String com o valor informado.
     * @throw invalid_argument Se o valor for invalido.
     */
    void setValor(const string &dinheiro_string);

    /**
     * @brief Retorna o valor armazenado em centavos.
     * @return Valor inteiro em centavos.
     */
    long long getValor() const;

    /**
     * @brief Retorna o valor em reais com duas casas decimais.
     * @return String formatada como "R$X,XX".
     */
    string getValorFormatado() const;
};

#endif // DINHEIRO_H_INCLUDED
