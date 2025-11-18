#include "ApresentacaoQuarto.h"
using namespace std;

void ApresentacaoQuarto::cadastrarQuarto() {
    try {
        Quarto quarto;
        Numero numero;
        Capacidade capacidade;
        Dinheiro diaria;
        Ramal ramal;
        string entrada;

        cout << "\nDigite o número do quarto: ";
        getline(cin, entrada);
        numero.setValor(entrada);
        quarto.setNumero(numero);

        cout << "Digite a capacidade (1 a 4): ";
        getline(cin, entrada);
        capacidade.setValor(stoi(entrada));
        quarto.setCapacidade(capacidade);

        cout << "Digite o valor da diária (1 a 1000000): ";
        getline(cin, entrada);
        diaria.setValor(entrada);
        quarto.setDiaria(diaria);

        cout << "Digite o ramal (00 a 50): ";
        getline(cin, entrada);
        ramal.setValor(entrada);
        quarto.setRamal(ramal);

        quartoService->cadastrarQuarto(quarto);
        cout << "✅ Quarto cadastrado com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}

void ApresentacaoQuarto::listarQuartos() {
    vector<Quarto> lista = quartoService->listarQuartos();

    cout << "\n=== QUARTOS CADASTRADOS ===\n";
    if (lista.empty()) {
        cout << "Nenhum quarto cadastrado.\n";
        return;
    }

    for (const auto &q : lista) {
        cout << "Número: " << q.getNumero().getValor() << endl;
        cout << "Capacidade: " << q.getCapacidade().getValor() << endl;
        cout << "-----------------------------\n";
    }
}

void ApresentacaoQuarto::removerQuarto() {
    try {
        Numero numero;
        string entrada;

        cout << "Digite o número do quarto a remover: ";
        getline(cin, entrada);
        numero.setValor(entrada);

        quartoService->removerQuarto(numero);
        cout << "✅ Quarto removido com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}
void ApresentacaoQuarto::executar() {
    int opcao = -1;

    do {
        cout << "\n=== MENU QUARTO ===\n";
        cout << "1. Cadastrar quarto\n";
        cout << "2. Listar quartos\n";
        cout << "3. Remover quarto\n";
        cout << "0. Voltar\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cadastrarQuarto();
                break;
            case 2:
                listarQuartos();
                break;
            case 3:
                removerQuarto();
                break;
            case 0:
                cout << "Retornando ao menu principal...\n";
                break;
            default:
                cout << "❌ Opção inválida!\n";
        }
    } while (opcao != 0);
}
