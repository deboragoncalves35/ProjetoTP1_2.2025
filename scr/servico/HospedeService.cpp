#include "HospedeService.h"

/**
 * @brief Cadastra um novo hóspede.
 * @param hospede Objeto da classe Hospede a ser cadastrado.
 * @throw invalid_argument Se já existir um hóspede com o mesmo cartão.
 */
void HospedeService::cadastrarHospede(const Hospede &hospede) {
    for (const auto &h : hospedes) {
        if (h.getCartao().getValor() == hospede.getCartao().getValor()) {
            throw invalid_argument("Já existe um hóspede cadastrado com esse cartão.");
        }
    }
    hospedes.push_back(hospede);
}

/**
 * @brief Retorna todos os hóspedes cadastrados.
 * @return Vetor contendo objetos da classe Hospede.
 */
vector<Hospede> HospedeService::listarHospedes() const {
    return hospedes;
}

/**
 * @brief Remove um hóspede com base no cartão informado.
 * @param cartao Objeto da classe Cartao representando o hóspede.
 * @throw invalid_argument Se o hóspede não for encontrado.
 */
void HospedeService::removerHospede(const Cartao &cartao) {
    for (auto it = hospedes.begin(); it != hospedes.end(); ++it) {
        if (it->getCartao().getValor() == cartao.getValor()) {
            hospedes.erase(it);
            return;
        }
    }
    throw invalid_argument("Hóspede não encontrado para remoção.");
}
