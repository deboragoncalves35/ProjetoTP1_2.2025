#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Data
 * @brief Representa uma data no formato DD-MMM-AAAA.
 *
 * O formato valido e DD-MMM-AAAA, onde o mes deve ser uma sigla
 * em letras maiusculas (JAN, FEV, MAR, ABR, MAI, JUN,
 * JUL, AGO, SET, OUT, NOV, DEZ).
 * A data deve ser valida, considerando o ano bissexto.
 */
class Data {
private:
    string valor; ///< Armazena a data validada (ex: 05-MAI-2025).

    /**
     * @brief Verifica se o ano e bissexto.
     * @param ano Valor do ano.
     * @return true se o ano for bissexto.
     */
    bool anoBissexto(int ano) const;

    /**
     * @brief Verifica se a data informada e valida.
     * @param data String com a data.
     * @throw invalid_argument Se o formato ou valores forem invalidos.
     */
    void validarData(const string &data);

public:
    /**
     * @brief Define o valor da data apos validacao.
     * @param data String no formato DD-MMM-AAAA.
     * @throw invalid_argument Se o formato for invalido.
     */
    void setValor(const string &data);

    /**
     * @brief Retorna o valor armazenado.
     * @return String com a data.
     */
    string getValor() const;
};

#endif // DATA_H_INCLUDED
