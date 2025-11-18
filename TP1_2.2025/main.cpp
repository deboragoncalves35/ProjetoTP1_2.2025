#include <iostream>
#include <locale>
#include "apresentacao/ApresentacaoHotel.h"
#include "apresentacao/ApresentacaoGerente.h"
#include "apresentacao/ApresentacaoHospede.h"
#include "apresentacao/ApresentacaoQuarto.h"
#include "apresentacao/ApresentacaoReserva.h"

// Serviços (camada de negócio)
#include "servico/HotelService.h"
#include "servico/GerenteService.h"
#include "servico/HospedeService.h"
#include "servico/QuartoService.h"
#include "servico/ReservaService.h"

using namespace std;

// Função que mostra o menu principal
void mostrarMenu() {
    cout << "\n======================================" << endl;
    cout << "  SISTEMA DE GESTAO DE HOTEL" << endl;
    cout << "======================================" << endl;
    cout << "1. Gerenciar Hoteis" << endl;
    cout << "2. Gerenciar Gerentes" << endl;
    cout << "3. Gerenciar Hospedes" << endl;
    cout << "4. Gerenciar Quartos" << endl;
    cout << "5. Gerenciar Reservas" << endl;
    cout << "0. Sair" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Escolha uma opcao: ";
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    IHotelService* hotelService = new HotelService();
    IGerenteService* gerenteService = new GerenteService();
    IHospedeService* hospedeService = new HospedeService();
    IQuartoService* quartoService = new QuartoService();
    IReservaService* reservaService = new ReservaService();


    ApresentacaoHotel telaHotel(hotelService);
    ApresentacaoGerente telaGerente(gerenteService);
    ApresentacaoHospede telaHospede(hospedeService);
    ApresentacaoQuarto telaQuarto(quartoService);
    ApresentacaoReserva telaReserva(reservaService);

    int opcao = -1;

    do {
        mostrarMenu();
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                telaHotel.executar();
                break;
            case 2:
                telaGerente.executar();
                break;
            case 3:
                telaHospede.executar();
                break;
            case 4:
                telaQuarto.executar();
                break;
            case 5:
                telaReserva.executar();
                break;
            case 0:
                cout << "\nEncerrando o sistema..." << endl;
                break;
            default:
                cout << "\n❌ Opcao invalida. Tente novamente." << endl;
        }

    } while (opcao != 0);

    delete hotelService;
    delete gerenteService;
    delete hospedeService;
    delete quartoService;
    delete reservaService;

    return 0;
}
