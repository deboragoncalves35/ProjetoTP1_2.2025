#ifndef CODIGO_H_INCLUDED
#define CODIGO_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Codigo
 * @brief Representa um codigo composto por 10 caracteres.
 *
 * Cada caractere pode ser uma letra (a-z ou A-Z) ou um digito (0-9).
 * O codigo deve ter exatamente 10 caracteres validos.
 */
class Codigo {
private:
    string valor; ///< Armazena o codigo validado.

    /**
     * @brief Verifica se o valor informado atende ao formato correto.
     * @param codigo Valor a ser verificado.
     * @throw invalid_argument Se o formato for invalido.
     */
    void validarCodigo(const string &codigo);

public:
    /**
     * @brief Define o valor do codigo apos validacao.
     * @param codigo String contendo o codigo.
     * @throw invalid_argument Se o valor for invalido.
     */
    void setValor(const string &codigo);

    /**
     * @brief Retorna o valor atual armazenado.
     * @return String com o codigo.
     */
    string getValor() const;
};

#endif // CODIGO_H_INCLUDED
