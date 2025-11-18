#ifndef QUARTOSERVICE_H_INCLUDED
#define QUARTOSERVICE_H_INCLUDED

#include <vector>
#include <stdexcept>
#include "../interfaces/IQuartoService.h"
#include "../entidade/Quarto.h"
#include "../dominio/Codigo.h"
#include "../dominio/Numero.h"

using namespace std;

/**
 * @class QuartoService
 * @brief Implementa os serviços definidos na interface IQuartoService.
 * @details Responsável por gerenciar o cadastro, listagem e remoção de quartos.
 */
class QuartoService : public IQuartoService {
private:
    vector<Quarto> quartos; ///< Armazena os quartos cadastrados no sistema.

public:
    /**
     * @brief Adiciona um novo quarto ao sistema.
     * @param quarto Instância de Quarto a ser adicionada.
     */
    void cadastrarQuarto(const Quarto &quarto) override;

    /**
     * @brief Retorna a lista de quartos cadastrados.
     * @return Vetor contendo os objetos Quarto.
     */
    vector<Quarto> listarQuartos() const override;

    /**
     * @brief Remove um quarto do sistema com base no número.
     * @param numero Instância de Numero identificando o quarto.
     * @throw invalid_argument Se o número não for encontrado.
     */
    void removerQuarto(const Numero &numero) override;
};

#endif // QUARTOSERVICE_H_INCLUDED
