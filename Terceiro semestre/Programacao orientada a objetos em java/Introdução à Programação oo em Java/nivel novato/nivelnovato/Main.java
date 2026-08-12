package nivelnovato;

public class Main {
    public static void main(String[] args) {
        Personagem personagem1 = new Personagem("Pedro", "Mago", 10, 200, 150);
        Personagem personagem2 = new Personagem("Maria", "Arqueiro", 5, 150, 225);
        personagem1.exibirStatus();
        personagem2.exibirStatus();
    }
}
