json.extract! employee, :id, :name, :emp_code, :created_at, :updated_at
json.url employee_url(employee, format: :json)
