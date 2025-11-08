#ifndef QUARTO_H_INCLUDED
#define QUARTO_H_INCLUDED

#include "../dominio/Numero.h"
#include "../dominio/Capacidade.h"
#include "../dominio/Dinheiro.h"
#include "../dominio/Ramal.h"
using namespace std;

/**
 * @class Quarto
 * @brief Representa um quarto de hotel no sistema.
 *
 * A classe Quarto e composta pelos dominios Numero, Capacidade, Dinheiro e Ramal.
 * Cada dominio e validado individualmente ao ser definido.
 * Segue o padrao de encapsulamento e eficiencia otima (uso de referencias constantes).
 */
class Quarto {
private:
    Numero numero;          ///< Numero do quarto.
    Capacidade capacidade;  ///< Capacidade do quarto (quantidade de hospedes).
    Dinheiro diaria;        ///< Valor da diaria do quarto.
    Ramal ramal;            ///< Ramal do quarto.

public:
    /**
     * @brief Define o numero do quarto.
     * @param valor Instancia valida do dominio Numero.
     */
    void setNumero(const Numero &valor);

    /**
     * @brief Define a capacidade do quarto.
     * @param valor Instancia valida do dominio Capacidade.
     */
    void setCapacidade(const Capacidade &valor);

    /**
     * @brief Define a diaria do quarto.
     * @param valor Instancia valida do dominio Dinheiro.
     */
    void setDiaria(const Dinheiro &valor);

    /**
     * @brief Define o ramal do quarto.
     * @param valor Instancia valida do dominio Ramal.
     */
    void setRamal(const Ramal &valor);

    /**
     * @brief Retorna o numero do quarto (referencia constante para evitar copia).
     * @return Referencia constante ao objeto Numero associado.
     */
    const Numero& getNumero() const;

    /**
     * @brief Retorna a capacidade do quarto (referencia constante para evitar copia).
     * @return Referencia constante ao objeto Capacidade associado.
     */
    const Capacidade& getCapacidade() const;

    /**
     * @brief Retorna a diaria do quarto (referencia constante para evitar copia).
     * @return Referencia constante ao objeto Dinheiro associado.
     */
    const Dinheiro& getDiaria() const;

    /**
     * @brief Retorna o ramal do quarto (referencia constante para evitar copia).
     * @return Referencia constante ao objeto Ramal associado.
     */
    const Ramal& getRamal() const;
};

#endif // QUARTO_H_INCLUDED
