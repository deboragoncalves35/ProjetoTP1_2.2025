#include "Data.h"
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>

/**
 * @brief Verifica se o ano informado e bissexto.
 * @param ano Valor do ano.
 * @return true se for bissexto, false caso contrario.
 */
bool Data::anoBissexto(int ano) const {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

/**
 * @brief Verifica se a data informada segue o formato e e valida.
 * @param data String no formato DD-MMM-AAAA.
 * @throw invalid_argument Se o formato ou valores forem invalidos.
 */
void Data::validarData(const string &data) {

    if (data.size() != 11 || data[2] != '-' || data[6] != '-') {
        throw invalid_argument("Data invalida: formato incorreto (use DD-MMM-AAAA).");
    }

    string diaStr = data.substr(0, 2);
    string mesStr = data.substr(3, 3);
    string anoStr = data.substr(7, 4);

    for (char c : diaStr)
        if (!isdigit(static_cast<unsigned char>(c)))
            throw invalid_argument("Data invalida: dia deve ser numerico.");

    for (char c : anoStr)
        if (!isdigit(static_cast<unsigned char>(c)))
            throw invalid_argument("Data invalida: ano deve ser numerico.");

    int dia = stoi(diaStr);
    int ano = stoi(anoStr);

    if (ano < 2000 || ano > 2999)
        throw invalid_argument("Data invalida: ano fora do intervalo (2000-2999).");

    vector<string> meses = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
    auto it = find(meses.begin(), meses.end(), mesStr);
    if (it == meses.end())
        throw invalid_argument("Data invalida: mes incorreto.");

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mesStr == "FEV" && anoBissexto(ano))
        diasMes[1] = 29;

    int indiceMes = distance(meses.begin(), it);

    if (dia < 1 || dia > diasMes[indiceMes])
        throw invalid_argument("Data invalida: dia fora do intervalo permitido.");
}

/**
 * @brief Define o valor apos validacao.
 * @param data String no formato DD-MMM-AAAA.
 */
void Data::setValor(const string &data) {
    validarData(data);
    valor = data;
}

/**
 * @brief Retorna o valor armazenado.
 * @return String com a data.
 */
string Data::getValor() const {
    return valor;
}
