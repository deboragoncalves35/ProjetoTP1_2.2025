#ifndef IQUARTOSERVICE_H
#define IQUARTOSERVICE_H

#include "../entidade/Quarto.h"
#include <vector>

/**
 * @brief Interface responsável pelos serviços de Quarto.
 */
class IQuartoService {
public:
    /**
     * @brief Adiciona um novo quarto ao sistema.
     * @param quarto Instância de Quarto a ser adicionada.
     */
<<<<<<< HEAD
    virtual void cadastrarQuarto(const Quarto&) = 0;
=======
    virtual void adicionarQuarto(const Quarto&) = 0;
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103

    /**
     * @brief Retorna a lista de quartos cadastrados.
     * @return Vetor com objetos Quarto.
     */
    virtual std::vector<Quarto> listarQuartos() const = 0;

    /**
     * @brief Remove um quarto com base no número do quarto.
     * @param numero Instância de Numero que identifica o quarto.
     */
    virtual void removerQuarto(const Numero&) = 0;

    virtual ~IQuartoService() {}
};

#endif
