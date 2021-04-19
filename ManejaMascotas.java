package MiCodigo;

public class ManejaMascotas {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Mascota miLindoGatito;
		MascotaConCuidados miLindaTortuga;
		Mascota miLindaPaloma;
		miLindoGatito=new Mascota("gato", "Silvestre", 1);
		miLindaPaloma=new Mascota("Cucurrucurru");
		System.out.println(" y se llama" +miLindaPaloma.getNombre());
		miLindaTortuga=new MascotaConCuidados("tortuga", "rayo", 16);
		System.out.println("Uy, Uy, mi "+miLindoGatito.getEspecie()+" hace Uy, Uy");
		System.out.println(" y se llama" +miLindoGatito.getNombre());
		miLindaTortuga.setCuidados("no estresarla");
		System.out.println("Mi "+ miLindaTortuga.getEspecie()+" se llama "+ miLindaTortuga.getNombre()+ " y conviene " +miLindaTortuga.getCuidados());
		
	}

}
