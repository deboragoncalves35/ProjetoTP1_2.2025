#ifndef IGERENTESERVICE_H
#define IGERENTESERVICE_H

#include "../entidade/Gerente.h"
#include <vector>

/**
 * @brief Interface responsável pelos serviços de Gerente.
 */
class IGerenteService {
public:
    /**
     * @brief Cadastra um novo gerente no sistema.
     * @param gerente Instância de Gerente a ser cadastrada.
     */
    virtual void cadastrarGerente(const Gerente&) = 0;

    /**
     * @brief Lista todos os gerentes cadastrados.
     * @return Vetor contendo os objetos Gerente.
     */
    virtual std::vector<Gerente> listarGerentes() const = 0;

    /**
     * @brief Remove um gerente com base no e-mail.
     * @param email Instância de Email que identifica o gerente.
     */
    virtual void removerGerente(const Email&) = 0;

    /**
     * @brief Autentica o login de um gerente no sistema.
     * @param email Email do gerente.
     * @param senha Senha do gerente.
     * @return Verdadeiro se o login for bem-sucedido.
     */
    virtual bool autenticarGerente(const Email&, const Senha&) = 0;

    virtual ~IGerenteService() {}
};

#endif
