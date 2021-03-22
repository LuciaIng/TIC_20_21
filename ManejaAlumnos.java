package MiCodigo;

public class ManejaAlumnos {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Alumno pepe;
		AlumnoBecado juana;
		Fecha nacimientoJose;
		Fecha nacimientoJuana;
		nacimientoJose=new Fecha(14,3,2021);
		nacimientoJuana=new Fecha(1,2,1988);
		pepe=new Alumno("José","López","García",nacimientoJose);
		juana=new AlumnoBecado("Juana","Pérez","González",nacimientoJuana);
		System.out.println("NUEVO alumno:");
		System.out.println(pepe.getNombre());
		System.out.println(pepe.getApellido1());
		System.out.println(pepe.getApellido2());
		System.out.println((pepe.getFechaNacimiento()).getFechaConFormatoCorto());
		System.out.println("Alumna becada");
		System.out.println(juana.getNombre());
		System.out.println(juana.getApellido1());
		System.out.println(juana.getApellido2());
		System.out.println(juana.getFechaNacimiento().getFechaConFormatoCorto());
		System.out.println("¿Becada?:"+juana.isBeca());
		
		
		
		
	}

}
