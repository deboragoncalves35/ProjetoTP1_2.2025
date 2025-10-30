#ifndef CAPACIDADE_H_INCLUDED
#define CAPACIDADE_H_INCLUDED

#include <stdexcept>
using namespace std;

/**
 * @class Capacidade
 * @brief Representa a capacidade de um quarto em número de hóspedes.
 *
 * A capacidade deve ser um número inteiro válido entre 1 e 4.
 * Qualquer valor fora desse intervalo deve gerar uma exceção.
 */
class Capacidade {
private:
    int valor;  ///< Valor da capacidade (1, 2, 3 ou 4).

    /**
     * @brief Valida o valor informado para a capacidade.
     * @param valor Valor inteiro a ser validado.
     * @throw invalid_argument Se o valor estiver fora do intervalo permitido.
     */
    void validar(int valor);

public:
    /**
     * @brief Define o valor da capacidade, verificando se é válido.
     * @param valor Valor inteiro a ser atribuído (1, 2, 3 ou 4).
     * @throw invalid_argument Se o valor for inválido.
     */
    void setValor(int valor);

    /**
     * @brief Retorna o valor atual da capacidade.
     * @return Valor inteiro correspondente à capacidade.
     */
    int getValor() const;
};

#endif // CAPACIDADE_H_INCLUDED
