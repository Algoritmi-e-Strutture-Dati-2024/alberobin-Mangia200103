int main() {
    AlberoBin<int> albero;

    albero.inserisciRadice(3);
    cout << "Albero dopo aver inserito la radice: " << endl;
    albero.mostraAlbero();

    albero.aggiungiSinistro(0, 19);
    albero.aggiungiDestro(0, 31);
    albero.aggiungiSinistro(1, 56);

    cout << "\nAlbero dopo aver inserito i figli:" << endl;
    albero.mostraAlbero();

    int nodoCorrente = 0;
    int sinistro = albero.indiceSinistro(nodoCorrente);
    int destro = albero.indiceDestro(nodoCorrente);

    cout << "\nNodo " << nodoCorrente << " (" << albero.leggiRadice() << ") ha:" << endl;
    cout << "Figlio sinistro: " << (sinistro != -1 ? sinistro : -1) << endl;
    cout << "Figlio destro: " << (destro != -1 ? destro : -1) << endl;

    albero.eliminaNodo(3);
    cout << "\nAlbero dopo aver rimosso il nodo 3:" << endl;
    albero.mostraAlbero();

    return 0;
}
