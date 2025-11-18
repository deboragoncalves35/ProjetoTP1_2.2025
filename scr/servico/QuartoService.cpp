#include "QuartoService.h"

/**
 * @brief Adiciona um novo quarto ao sistema.
 * @param quarto Objeto da classe Quarto.
 */
void QuartoService::cadastrarQuarto(const Quarto &quarto) {
    for (const auto &q : quartos) {
        if (q.getNumero().getValor() == quarto.getNumero().getValor()) {
            throw invalid_argument("Já existe um quarto cadastrado com esse número.");
        }
    }

    quartos.push_back(quarto);
}

/**
 * @brief Retorna todos os quartos cadastrados.
 * @return Vetor contendo objetos da classe Quarto.
 */
vector<Quarto> QuartoService::listarQuartos() const {
    return quartos;
}

/**
 * @brief Remove um quarto do sistema com base no número.
 * @param numero Objeto da classe Numero representando o número do quarto.
 * @throw invalid_argument Se o número informado não existir.
 */
void QuartoService::removerQuarto(const Numero &numero) {
    for (auto it = quartos.begin(); it != quartos.end(); ++it) {
        if (it->getNumero().getValor() == numero.getValor()) {
            quartos.erase(it);
            return;
        }
    }
    throw invalid_argument("Quarto não encontrado para remoção.");
}
