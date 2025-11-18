#include "HotelService.h"

/**
 * @brief Adiciona um novo hotel à lista de hoteis.
 */
void HotelService::adicionarHotel(const Hotel &hotel) {
    hoteis.push_back(hotel);
}

/**
 * @brief Retorna a lista de todos os hoteis cadastrados.
 */
vector<Hotel> HotelService::listarHoteis() const {
    return hoteis;
}

/**
 * @brief Remove um hotel da lista, com base no código.
 * @throw invalid_argument Se o hotel não for encontrado.
 */
void HotelService::removerHotel(const Codigo &codigo) {
    for (auto it = hoteis.begin(); it != hoteis.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            hoteis.erase(it);
            return;
        }
    }
    throw invalid_argument("Hotel não encontrado para remoção.");
}
