#include "ApresentacaoReserva.h"
using namespace std;

void ApresentacaoReserva::cadastrarReserva() {
    try {
        Reserva reserva;
        Data chegada, partida;
        Dinheiro valor;
        Codigo codigo;
        string entrada;

        cout << "\nDigite a data de chegada (DD-MMM-AAAA): ";
        getline(cin, entrada);
        chegada.setValor(entrada);
        reserva.setChegada(chegada);

        cout << "Digite a data de partida (DD-MMM-AAAA): ";
        getline(cin, entrada);
        partida.setValor(entrada);
        reserva.setPartida(partida);

        cout << "Digite o valor da reserva: ";
        getline(cin, entrada);
        valor.setValor(entrada);
        reserva.setValor(valor);

        cout << "Digite o código da reserva (10 caracteres): ";
        getline(cin, entrada);
        codigo.setValor(entrada);
        reserva.setCodigo(codigo);

        reservaService->cadastrarReserva(reserva);
        cout << "✅ Reserva cadastrada com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}

void ApresentacaoReserva::listarReservas() {
    vector<Reserva> lista = reservaService->listarReservas();

    cout << "\n=== RESERVAS CADASTRADAS ===\n";
    if (lista.empty()) {
        cout << "Nenhuma reserva cadastrada.\n";
        return;
    }

    for (const auto &r : lista) {
        cout << "Código: " << r.getCodigo().getValor() << endl;
        cout << "Chegada: " << r.getChegada().getValor() << endl;
        cout << "Partida: " << r.getPartida().getValor() << endl;
        cout << "-----------------------------\n";
    }
}

void ApresentacaoReserva::removerReserva() {
    try {
        Codigo codigo;
        string entrada;

        cout << "Digite o código da reserva a remover: ";
        getline(cin, entrada);
        codigo.setValor(entrada);

        reservaService->removerReserva(codigo);
        cout << "✅ Reserva removida com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}
void ApresentacaoReserva::executar() {
    int opcao = -1;

    do {
        cout << "\n=== MENU RESERVA ===\n";
        cout << "1. Cadastrar reserva\n";
        cout << "2. Listar reservas\n";
        cout << "3. Remover reserva\n";
        cout << "0. Voltar\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cadastrarReserva();
                break;
            case 2:
                listarReservas();
                break;
            case 3:
                removerReserva();
                break;
            case 0:
                cout << "Retornando ao menu principal...\n";
                break;
            default:
                cout << "❌ Opção inválida!\n";
        }
    } while (opcao != 0);
}
