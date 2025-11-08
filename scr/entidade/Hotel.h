#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

#include "../dominio/Nome.h"
#include "../dominio/Endereco.h"
#include "../dominio/Telefone.h"
#include "../dominio/Codigo.h"
#include "Gerente.h"
#include "Quarto.h"
#include <vector>
using namespace std;

/**
 * @class Hotel
 * @brief Representa um hotel cadastrado no sistema.
 *
 * A classe Hotel agrega dominios Nome, Endereco, Telefone e Codigo,
 * e associa-se a um Gerente e a varios Quartos.
 */
class Hotel {
private:
    Nome nome;            ///< Nome do hotel.
    Endereco endereco;    ///< Endereco do hotel.
    Telefone telefone;    ///< Telefone do hotel.
    Codigo codigo;        ///< Codigo identificador do hotel (PK).
    Gerente gerente;      ///< Gerente responsavel pelo hotel.
    vector<Quarto> quartos; ///< Lista de quartos do hotel.

public:

    void setNome(const Nome &valor);
    void setEndereco(const Endereco &valor);
    void setTelefone(const Telefone &valor);
    void setCodigo(const Codigo &valor);
    const Nome& getNome() const;
    const Endereco& getEndereco() const;
    const Telefone& getTelefone() const;
    const Codigo& getCodigo() const;

    void setGerente(const Gerente &valor);
    const Gerente& getGerente() const;
    void adicionarQuarto(const Quarto &quarto);
    const vector<Quarto>& getQuartos() const;
};

#endif // HOTEL_H_INCLUDED
