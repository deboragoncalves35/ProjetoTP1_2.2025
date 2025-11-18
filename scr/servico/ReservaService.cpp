#include "ReservaService.h"

/**
 * @brief Adiciona uma nova reserva ao sistema.
 * @param reserva Objeto da classe Reserva a ser cadastrado.
 * @throw invalid_argument Se já existir uma reserva com o mesmo código.
 */
void ReservaService::cadastrarReserva(const Reserva &reserva) {
    // Verifica se já existe uma reserva com o mesmo código
    for (const auto &r : reservas) {
        if (r.getCodigo().getValor() == reserva.getCodigo().getValor()) {
            throw invalid_argument("Já existe uma reserva cadastrada com esse código.");
        }
    }

    reservas.push_back(reserva);
}

/**
 * @brief Retorna todas as reservas cadastradas.
 * @return Vetor contendo objetos da classe Reserva.
 */
std::vector<Reserva> ReservaService::listarReservas() const {
    return reservas;
}

/**
 * @brief Remove uma reserva com base no código informado.
 * @param codigo Objeto da classe Codigo representando o identificador da reserva.
 * @throw invalid_argument Se a reserva não for encontrada.
 */
void ReservaService::removerReserva(const Codigo &codigo) {
    for (auto it = reservas.begin(); it != reservas.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            reservas.erase(it);
            return;
        }
    }

    throw invalid_argument("Reserva nao encontrada para o codigo informado.");
}
