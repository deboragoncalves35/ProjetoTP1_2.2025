#ifndef GERENTE_H_INCLUDED
#define GERENTE_H_INCLUDED

#include "Pessoa.h"
#include "../dominio/Ramal.h"
#include "../dominio/Senha.h"
using namespace std;

/**
 * @class Gerente
 * @brief Representa um gerente de hotel no sistema.
 *
 * Herda de Pessoa (nome e email) e adiciona Ramal e Senha.
 * Segue o padrao de encapsulamento e reutilizacao de codigo via heranca.
 */
class Gerente : public Pessoa {
private:
    Ramal ramal;  ///< Ramal do gerente.
    Senha senha;  ///< Senha de acesso do gerente.

public:
    /**
     * @brief Define o ramal do gerente.
     * @param valor Instancia valida do dominio Ramal.
     */
    void setRamal(const Ramal &valor);

    /**
     * @brief Define a senha do gerente.
     * @param valor Instancia valida do dominio Senha.
     */
    void setSenha(const Senha &valor);

    /**
     * @brief Retorna o ramal do gerente.
     * @return Referencia constante ao objeto Ramal associado.
     */
    const Ramal& getRamal() const;

    /**
     * @brief Retorna a senha do gerente.
     * @return Referencia constante ao objeto Senha associado.
     */
    const Senha& getSenha() const;
};

#endif // GERENTE_H_INCLUDED
