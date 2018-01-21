class AddBranchToStudents < ActiveRecord::Migration[5.1]
  def change
    add_column :students, :branch, :string
  end
end
