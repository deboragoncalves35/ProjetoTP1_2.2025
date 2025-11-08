#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include "../dominio/Nome.h"
#include "../dominio/Email.h"
using namespace std;

/**
 * @class Pessoa
 * @brief Representa uma pessoa generica no sistema (superclasse de Gerente e Hospede).
 *
 * A classe Pessoa contem os dominios Nome e Email.
 * Segue os principios de encapsulamento e reutilizacao por heranca.
 */
class Pessoa {
protected:
    Nome nome;     ///< Nome da pessoa.
    Email email;   ///< Endereco de email da pessoa.

public:
    /**
     * @brief Define o nome da pessoa.
     * @param valor Instancia valida do dominio Nome.
     */
    void setNome(const Nome &valor);

    /**
     * @brief Define o email da pessoa.
     * @param valor Instancia valida do dominio Email.
     */
    void setEmail(const Email &valor);

    /**
     * @brief Retorna o nome da pessoa.
     * @return Referencia constante ao objeto Nome associado.
     */
    const Nome& getNome() const;

    /**
     * @brief Retorna o email da pessoa.
     * @return Referencia constante ao objeto Email associado.
     */
    const Email& getEmail() const;
};

#endif // PESSOA_H_INCLUDED
