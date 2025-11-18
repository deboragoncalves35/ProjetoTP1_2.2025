#include "ApresentacaoGeral.h"

/**
 * @brief Exibe o menu principal e direciona o usuário para o módulo escolhido.
 */
void ApresentacaoGeral::executar() {
    int opcao = 0;

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

    do {
        cout << "\n=====================================" << endl;
        cout << "   SISTEMA DE GESTAO DE HOTEL  " << endl;
        cout << "=====================================" << endl;
        cout << "1 - Gerenciar Hoteis" << endl;
        cout << "2 - Gerenciar Gerentes" << endl;
        cout << "3 - Gerenciar Hospedes" << endl;
        cout << "4 - Gerenciar Quartos" << endl;
        cout << "5 - Gerenciar Reservas" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
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
                cout << "\n❌ Opcao invalida. Tente novamente!" << endl;
                break;
        }

    } while (opcao != 0);

    delete hotelService;
    delete gerenteService;
    delete hospedeService;
    delete quartoService;
    delete reservaService;
}
