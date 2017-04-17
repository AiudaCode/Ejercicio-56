
import javax.swing.JOptionPane;

public class Main
{
    // método para llenar el vector
    public static void llenar(Proceso pro)
    {
        // pedimos el nombre del proceso
        String n_proceso = JOptionPane.showInputDialog("Digite nombre del proceso:");
        // encapsulamos la variable n_proceso
        pro.setNombreProceso(n_proceso);
        // pedimos el tiempo de uso del procesador
        int t = Integer.parseInt(JOptionPane.showInputDialog("Digite tiempo de uso del procesador:"));
        // encapsulamos la variable t
        pro.setTiempo(t);
        // pedimos el nombre de la tarea
        String n_tarea = JOptionPane.showInputDialog("Digite nombre de la tarea ejecutada:");
        // encapsulamos la variable n_tarea
        pro.setNombreTarea(n_tarea);
    }
    
    // método para mostrar la informacion del vector
    public static void mostrar(Registro obj)
    {
        String datos = "";
        // recorremos el vector con el ciclo for
        for (int i = 0; i < obj.getTamaño(); i++)
        {
            // acumulamos en la variable datos la informacion que haya en la posicion i del vector
            datos += "Nombre del proceso: " + obj.getVector(i).getNombreProceso() + "\n" +
                     "Tiempo de uso del procesador: " + obj.getVector(i).getTiempo() + "\n" +
                     "Nombre de la tarea: " + obj.getVector(i).getNombreTarea() + "\n\n";
        }
        // mostramos la variable datos
        JOptionPane.showMessageDialog(null, datos);
    }
    
    // método para mostrar el menu de opciones
    public static int menu()
    {
        int opcion;
        do
        {
            opcion = Integer.parseInt(JOptionPane.showInputDialog(
            "======== MENÚ =======\n" +
            "1. Mostrar registros\n" +
            "2. Ordenar registros\n" +
            "3. Salir"));
        }
        while (opcion < 1 || opcion > 3);
        return opcion;
    }
    
    public static void main(String[] args)
    {
        // creamos un objeto de la clase Registro (Instanciación)
        Registro obj = new Registro();
        // declaramos un objeto de la clase Proceso
        Proceso pro;
        int opcion;
        // pedimos el tamaño del vector
        int tam = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite tamaño del Vector:"));
        // encapsulamos la variable tam
        obj.setTamaño(tam);
        // creamos el vector
        obj.crearVector();
        // recorremos el vector con el ciclo for
        for (int i = 0; i < obj.getTamaño(); i++)
        {
            // creamos un nuevo objeto de la clase Proceso
            pro = new Proceso();
            JOptionPane.showMessageDialog(null, "Llene la información del registro " + i);
            // llenamos la informacion de ese objetos
            llenar(pro);
            // guardamos en la posicion i el objeto pro
            obj.setVector(i, pro);
        }
        do
        {
            // le asignamos a la variable opcion el valor que retorne el metodo menu
            opcion = menu();
            // dependiendo del valor que tenga la variabl opcion se seleccionara un caso
            switch(opcion) 
            {
                case 1:
                    mostrar(obj);
                    break;
                case 2:
                    obj.ordenar();
                    JOptionPane.showMessageDialog(null, "¡REGISTROS ORDENADOS!");
                    break;
                default:
                    break;
            }
        }
        while (opcion != 3);
    }
}