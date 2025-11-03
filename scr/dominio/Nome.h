#ifndef NOME_H_INCLUDED
#define NOME_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Nome
 * @brief Representa um nome valido.
 *
 * O nome deve ter entre 5 e 20 caracteres, podendo conter apenas letras e espacos.
 * Cada palavra deve comecar com letra maiuscula e as demais letras devem ser minusculas.
 * Nao pode iniciar nem terminar com espaco, nem conter dois espacos consecutivos.
 */
class Nome {
private:
    string valor; ///< Armazena o nome validado.

    /**
     * @brief Verifica se o nome informado e valido.
     * @param nome_string String contendo o nome informado.
     * @throw invalid_argument Se o formato for invalido.
     */
    void validarNome(const string &nome_string);

public:
    /**
     * @brief Define o valor apos validacao.
     * @param nome_string String contendo o nome informado.
     * @throw invalid_argument Se o nome for invalido.
     */
    void setValor(const string &nome_string);

    /**
     * @brief Retorna o nome armazenado.
     * @return String com o nome validado.
     */
    string getValor() const;
};

#endif // NOME_H_INCLUDED
