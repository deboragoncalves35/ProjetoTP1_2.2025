<<<<<<< HEAD
#ifndef IGERENTESERVICE_H_INCLUDED
#define IGERENTESERVICE_H_INCLUDED

#include "../entidade/Gerente.h"
#include "../dominio/Email.h"
#include "../dominio/Senha.h"
#include <vector>

using namespace std;

/**
 * @interface IGerenteService
 * @brief Define os serviços relacionados à entidade Gerente.
 * @details Esta interface especifica as operações de cadastro, listagem,
 * remoção e autenticação de gerentes no sistema.
=======
#ifndef IGERENTESERVICE_H
#define IGERENTESERVICE_H

#include "../entidade/Gerente.h"
#include <vector>

/**
 * @brief Interface responsável pelos serviços de Gerente.
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103
 */
class IGerenteService {
public:
    /**
<<<<<<< HEAD
     * @brief Adiciona (ou cadastra) um novo gerente no sistema.
     * @param gerente Instância de Gerente a ser adicionada.
=======
     * @brief Cadastra um novo gerente no sistema.
     * @param gerente Instância de Gerente a ser cadastrada.
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103
     */
    virtual void cadastrarGerente(const Gerente&) = 0;

    /**
<<<<<<< HEAD
     * @brief Retorna uma lista com todos os gerentes cadastrados.
     * @return Vetor contendo todos os objetos Gerente.
     */
    virtual vector<Gerente> listarGerentes() const = 0;

    /**
     * @brief Remove um gerente do sistema com base no e-mail.
     * @param email Instância de Email que identifica o gerente.
     * @throw invalid_argument Se o gerente não for encontrado.
     */
    virtual void removerGerente(const Email &email) = 0;
=======
     * @brief Lista todos os gerentes cadastrados.
     * @return Vetor contendo os objetos Gerente.
     */
    virtual std::vector<Gerente> listarGerentes() const = 0;

    /**
     * @brief Remove um gerente com base no e-mail.
     * @param email Instância de Email que identifica o gerente.
     */
    virtual void removerGerente(const Email&) = 0;
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103

    /**
     * @brief Autentica o login de um gerente no sistema.
     * @param email Email do gerente.
     * @param senha Senha do gerente.
<<<<<<< HEAD
     * @return Verdadeiro se o login for bem-sucedido, falso caso contrário.
     */
    virtual bool autenticarGerente(const Email &email, const Senha &senha) = 0;

    /**
     * @brief Destrutor virtual padrão.
     */
    virtual ~IGerenteService() = default;
};

#endif // IGERENTESERVICE_H_INCLUDED
=======
     * @return Verdadeiro se o login for bem-sucedido.
     */
    virtual bool autenticarGerente(const Email&, const Senha&) = 0;

    virtual ~IGerenteService() {}
};

#endif
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103
