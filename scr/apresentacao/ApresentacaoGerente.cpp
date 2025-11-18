#include "ApresentacaoGerente.h"
using namespace std;

void ApresentacaoGerente::cadastrarGerente() {
    try {
        Gerente gerente;
        Email email;
        Ramal ramal;
        Senha senha;
        string entrada;

        cout << "\nDigite o email do gerente: ";
        getline(cin, entrada);
        email.setValor(entrada);
        gerente.setEmail(email);

        cout << "Digite o ramal (00 a 50): ";
        getline(cin, entrada);
        ramal.setValor(entrada);
        gerente.setRamal(ramal);

        cout << "Digite a senha: ";
        getline(cin, entrada);
        senha.setValor(entrada);
        gerente.setSenha(senha);

        gerenteService->cadastrarGerente(gerente);
        cout << "✅ Gerente cadastrado com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}

void ApresentacaoGerente::listarGerentes() {
    vector<Gerente> lista = gerenteService->listarGerentes();

    cout << "\n=== GERENTES CADASTRADOS ===\n";
    if (lista.empty()) {
        cout << "Nenhum gerente cadastrado.\n";
        return;
    }

    for (const auto &g : lista) {
        cout << "Email: " << g.getEmail().getValor() << endl;
        cout << "Ramal: " << g.getRamal().getValor() << endl;
        cout << "-----------------------------\n";
    }
}

void ApresentacaoGerente::removerGerente() {
    try {
        Email email;
        string entrada;

        cout << "Digite o email do gerente a remover: ";
        getline(cin, entrada);
        email.setValor(entrada);

        gerenteService->removerGerente(email);
        cout << "✅ Gerente removido com sucesso!\n";
    } catch (const exception &e) {
        cerr << "❌ Erro: " << e.what() << endl;
    }
}
void ApresentacaoGerente::executar() {
    int opcao = -1;

    do {
        cout << "\n=== MENU GERENTE ===\n";
        cout << "1. Cadastrar gerente\n";
        cout << "2. Listar gerentes\n";
        cout << "3. Remover gerente\n";
        cout << "0. Voltar\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cadastrarGerente();
                break;
            case 2:
                listarGerentes();
                break;
            case 3:
                removerGerente();
                break;
            case 0:
                cout << "Retornando ao menu principal...\n";
                break;
            default:
                cout << "❌ Opção inválida!\n";
        }
    } while (opcao != 0);
}


