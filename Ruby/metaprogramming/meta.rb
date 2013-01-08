class Thing
  def self.create_method(name)
    self.class_eval <<-CODE, __FILE__, __LINE__ + 1
      def #{name}()
        puts '#{name}'
      end
    CODE
  end
end

def main
  Thing.create_method('foo')
  thing = Thing.new
  thing.foo # => foo
end

if $0 == __FILE__
  main
end
