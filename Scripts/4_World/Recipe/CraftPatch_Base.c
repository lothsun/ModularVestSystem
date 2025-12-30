class CraftPatch_Base extends RecipeBase
{	
	protected string m_PatchName;
	protected string m_PatchClassName;
	
	override void Init()
	{
		m_Name = m_PatchName;
		m_IsInstaRecipe = false;
		m_AnimationLength = 1.5;
		m_Specialty = 0.01;

		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = 1;
		m_MaxQuantityIngredient[0] = -1;
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;
		
		//ingredient 1
		InsertIngredient(0,"Rag");

		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = -1;
		m_IngredientDestroy[0] = 0;
		m_IngredientUseSoftSkills[0] = false;
		
		//ingredient 2
		InsertIngredient(1,"SewingKit");
		
		m_IngredientAddHealth[1] = -10;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = 0;
		m_IngredientUseSoftSkills[1] = true;
		
		AddResult(m_PatchClassName);
		
		m_ResultSetFullQuantity[0] = 0;
		m_ResultSetQuantity[0] = -1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = 0;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};

