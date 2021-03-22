package MiCodigo;

public class AlumnoBecado extends Alumno {
	 private boolean beca;

	public AlumnoBecado(String nombre, String apellido1, String apellido2, Fecha fechaNacimiento) {
		super(nombre, apellido1, apellido2, fechaNacimiento);
		beca=true;
		// TODO Auto-generated constructor stub
	}

	/**
	 * @return the beca
	 */
	public boolean isBeca() {
		return beca;
	}

	/**
	 * @param beca the beca to set
	 */
	public void setBeca(boolean beca) {
		this.beca = beca;
	}
	
}
