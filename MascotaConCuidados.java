package MiCodigo;

public class MascotaConCuidados extends Mascota {
	private String cuidados;
	public MascotaConCuidados(String especie, String nombre, int edad) {
		super(especie, nombre, edad);
		// TODO Auto-generated constructor stub
	}
	/**
	 * @return the cuidados
	 */
	public String getCuidados() {
		return cuidados;
	}
	/**
	 * @param cuidados the cuidados to set
	 */
	public void setCuidados(String cuidados) {
		this.cuidados = cuidados;
	}

}
