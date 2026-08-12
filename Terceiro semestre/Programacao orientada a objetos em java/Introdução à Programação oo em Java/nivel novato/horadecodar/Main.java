package horadecodar;
public class Main {
    public static void main(String[] args) {
        Produto produto1 = new Produto("Notebook", 5600.90, 10);
        Produto produto2 = new Produto("Smartphone", 1500.55, 20);
        produto1.exibirInformacoes();
        produto2.exibirInformacoes();
    }
}
