#ifndef APRESENTACAOGERAL_H_INCLUDED
#define APRESENTACAOGERAL_H_INCLUDED

#include <iostream>
#include <string>

// Inclui os serviços
#include "../servico/HotelService.h"
#include "../servico/GerenteService.h"
#include "../servico/HospedeService.h"
#include "../servico/QuartoService.h"
#include "../servico/ReservaService.h"
#include "ApresentacaoHotel.h"
#include "ApresentacaoGerente.h"
#include "ApresentacaoHospede.h"
#include "ApresentacaoQuarto.h"
#include "ApresentacaoReserva.h"

using namespace std;

/**
 * @class ApresentacaoGeral
 * @brief Classe responsável pelo menu principal do sistema.
 */
class ApresentacaoGeral {
public:
    /// @brief Executa o menu principal do sistema.
    void executar();
};

#endif // APRESENTACAOGERAL_H_INCLUDED
