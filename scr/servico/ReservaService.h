#ifndef RESERVASERVICE_H_INCLUDED
#define RESERVASERVICE_H_INCLUDED

#include <vector>
#include <stdexcept>
#include "../interfaces/IReservaService.h"
#include "../entidade/Reserva.h"
#include "../dominio/Codigo.h"
#include "../dominio/Data.h"
#include "../dominio/Dinheiro.h"

using namespace std;

/**
 * @class ReservaService
 * @brief Implementa os serviços definidos na interface IReservaService.
 * @details Responsável por gerenciar o cadastro, listagem e remoção de reservas.
 */
class ReservaService : public IReservaService {
private:
    vector<Reserva> reservas; ///< Armazena as reservas cadastradas no sistema.

public:
    /**
     * @brief Adiciona uma nova reserva ao sistema.
     * @param reserva Objeto da classe Reserva a ser cadastrado.
     */
    void cadastrarReserva(const Reserva&) override;

    /**
     * @brief Lista todas as reservas cadastradas no sistema.
     * @return Vetor contendo as reservas cadastradas.
     */
    vector<Reserva> listarReservas() const override;

    /**
     * @brief Remove uma reserva com base no código informado.
     * @param codigo Instância da classe Codigo que identifica a reserva.
     * @throw invalid_argument Se o código não for encontrado.
     */
    void removerReserva(const Codigo &codigo) override;
};

#endif // RESERVASERVICE_H_INCLUDED
