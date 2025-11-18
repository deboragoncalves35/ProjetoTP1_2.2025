#ifndef HOTELSERVICE_H_INCLUDED
#define HOTELSERVICE_H_INCLUDED

#include <vector>
#include <stdexcept>
#include "../interfaces/IHotelService.h"
#include "../entidade/Hotel.h"
#include "../dominio/Codigo.h"

using namespace std;

/**
 * @class HotelService
 * @brief Implementa os serviços definidos na interface IHotelService.
 * @details Esta classe armazena e gerencia os hotéis cadastrados em memória.
 */
class HotelService : public IHotelService {
private:
    vector<Hotel> hoteis; ///< Armazena os hotéis cadastrados em memória.

public:
    /**
     * @brief Adiciona um novo hotel à lista.
     * @param hotel Objeto do tipo Hotel a ser adicionado.
     */
    void adicionarHotel(const Hotel &hotel) override;

    /**
     * @brief Lista todos os hotéis cadastrados.
     * @return Vetor de hotéis cadastrados.
     */
    vector<Hotel> listarHoteis() const override;

    /**

     * @brief Remove um hotel com base em seu código.
     * @param codigo Código do hotel a ser removido.
     * @throw invalid_argument Se o código não for encontrado.
     */
    void removerHotel(const Codigo &codigo) override;
};

#endif // HOTELSERVICE_H_INCLUDED

