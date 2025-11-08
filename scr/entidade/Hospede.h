#ifndef HOSPEDE_H_INCLUDED
#define HOSPEDE_H_INCLUDED

#include "Pessoa.h"
#include "../dominio/Endereco.h"
#include "../dominio/Cartao.h"
using namespace std;

/**
 * @class Hospede
 * @brief Representa um hospede cadastrado no sistema.
 *
 * Herda de Pessoa (nome e email) e adiciona Endereco e Cartao.
 * Segue o padrao de encapsulamento e reutilizacao via heranca.
 */
class Hospede : public Pessoa {
private:
    Endereco endereco;  ///< Endereco do hospede.
    Cartao cartao;      ///< Cartao de pagamento do hospede.

public:
    /**
     * @brief Define o endereco do hospede.
     * @param valor Instancia valida do dominio Endereco.
     */
    void setEndereco(const Endereco &valor);

    /**
     * @brief Define o cartao do hospede.
     * @param valor Instancia valida do dominio Cartao.
     */
    void setCartao(const Cartao &valor);

    /**
     * @brief Retorna o endereco do hospede.
     * @return Referencia constante ao objeto Endereco associado.
     */
    const Endereco& getEndereco() const;

    /**
     * @brief Retorna o cartao do hospede.
     * @return Referencia constante ao objeto Cartao associado.
     */
    const Cartao& getCartao() const;
};

#endif // HOSPEDE_H_INCLUDED
